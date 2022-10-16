const data = require('./data.js');
const classes = require('./data.js');
Page({
    data: {
        classes: classes.slice(0, 10),
        totalPage: 4,
        curPage: 1,
        pageSize: 10,
        pageSizeArray: [5, 10, 20, 50],
        isHighlight: false,
    },
    updateClasses() {
        this.setData({
            classes: classes.slice((this.data.curPage - 1) * (this.data.pageSize), (this.data.curPage) * (this.data.pageSize)),
        });
    },
    onPrevTap() {
        if (this.data.curPage <= 1) return;
        this.setData({
            curPage: this.data.curPage - 1,
        });
        this.updateClasses();
    },
    onNextTap() {
        if (this.data.curPage >= this.data.totalPage) return;
        this.setData({
            curPage: this.data.curPage + 1,
        });
        this.updateClasses();
    },
    onPageSizeChange(e) {
        // write your code here
        this.setData({
            pageSize: this.data.pageSizeArray[e.detail.value],
            classes: classes.slice(0, this.data.pageSizeArray[e.detail.value]),
            totalPage: Math.ceil(classes.length / (this.data.pageSizeArray[e.detail.value])),
            curPage: 1,
        })
    },
    onHightlightChange(e) {
        // write your code here
        this.setData({
            isHighlight: e.detail.value,
        })
    },
})
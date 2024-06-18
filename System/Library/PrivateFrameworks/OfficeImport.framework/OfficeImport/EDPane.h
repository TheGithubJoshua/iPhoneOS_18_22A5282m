@class EDReference;

@interface EDPane : NSObject {
    double mXSplitPosition;
    double mYSplitPosition;
    EDReference *mTopLeftCell;
    int mActivePane;
    int mPaneState;
}

+ (id)pane;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (int)paneState;
- (void)setPaneState:(int)a0;
- (void)setTopLeftCell:(id)a0;
- (int)activePane;
- (void)setActivePane:(int)a0;
- (void)setXSplitPosition:(double)a0;
- (void)setYSplitPosition:(double)a0;
- (id)topLeftCell;
- (double)xSplitPosition;
- (double)ySplitPosition;

@end

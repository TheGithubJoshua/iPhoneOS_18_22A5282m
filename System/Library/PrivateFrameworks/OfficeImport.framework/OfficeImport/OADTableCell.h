@class OADTableCellProperties, OADTextBody;

@interface OADTableCell : NSObject {
    OADTextBody *mTextBody;
    OADTableCellProperties *mProperties;
    int mRowSpan;
    int mGridSpan;
    BOOL mHorzMerge;
    BOOL mVertMerge;
    int mTopRow;
    int mLeftColumn;
}

- (void)setProperties:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (BOOL)merge:(int)a0;
- (id)properties;
- (void)setTextBody:(id)a0;
- (id)textBody;
- (int)rowSpan;
- (void)setRowSpan:(int)a0;
- (void)setTopRow:(int)a0;
- (int)topRow;
- (int)gridSpan;
- (BOOL)horzMerge;
- (int)leftColumn;
- (void)setGridSpan:(int)a0;
- (void)setHorzMerge:(BOOL)a0;
- (void)setLeftColumn:(int)a0;
- (void)setVertMerge:(BOOL)a0;
- (int)spanAlongDir:(int)a0;
- (BOOL)vertMerge;

@end

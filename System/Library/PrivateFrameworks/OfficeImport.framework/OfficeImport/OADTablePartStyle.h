@class OADTableCellStyle, OADTableTextStyle;

@interface OADTablePartStyle : NSObject {
    OADTableTextStyle *mTextStyle;
    OADTableCellStyle *mCellStyle;
}

+ (id)defaultStyle;

- (id)cellStyle;
- (id)textStyle;
- (void).cxx_destruct;
- (id)description;
- (void)setTextStyle:(id)a0;
- (void)setCellStyle:(id)a0;
- (id)shallowCopy;
- (void)applyOverridesFrom:(id)a0;

@end

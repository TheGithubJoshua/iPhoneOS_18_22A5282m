@class OADFill, OADTableCellBorderStyle;

@interface OADTableCellStyle : NSObject {
    OADTableCellBorderStyle *mBorderStyle;
    OADFill *mFill;
}

+ (id)defaultStyle;
+ (id)defaultFill;

- (void).cxx_destruct;
- (id)description;
- (void)setBorderStyle:(id)a0;
- (id)borderStyle;
- (id)fill;
- (void)setFill:(id)a0;
- (id)shallowCopy;
- (void)applyOverridesFrom:(id)a0;

@end

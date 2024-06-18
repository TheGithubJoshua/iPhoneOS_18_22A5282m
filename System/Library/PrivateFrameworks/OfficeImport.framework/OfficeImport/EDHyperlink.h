@class EDString, EDReference;

@interface EDHyperlink : NSObject {
    EDString *mPath;
    EDString *mDosPath;
    EDString *mDescriptionText;
    EDString *mTextMark;
    EDString *mToolTip;
    EDReference *mReference;
    int mType;
}

+ (id)hyperlink;

- (void)setPath:(id)a0;
- (void)setType:(int)a0;
- (void)setDescriptionText:(id)a0;
- (id)path;
- (void)setReference:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)descriptionText;
- (int)type;
- (id)reference;
- (id)toolTip;
- (void)setToolTip:(id)a0;
- (id)dosPath;
- (void)setDosPath:(id)a0;
- (void)setTextMark:(id)a0;
- (id)textMark;

@end

@class EDString, EDAlignmentInfo, EDProtection;

@interface EDTextBox : NSObject {
    EDString *mText;
    EDAlignmentInfo *mAlignmentInfo;
    EDProtection *mProtection;
}

+ (id)textBox;

- (id)text;
- (id)protection;
- (void).cxx_destruct;
- (id)description;
- (void)setText:(id)a0;
- (void)setProtection:(id)a0;
- (id)alignmentInfo;
- (void)setAlignmentInfo:(id)a0;

@end

@class UIFont, UIColor, WFVariableAttachmentCell, NSString, WFSlotIdentifier, WFVariable;

@interface WFVariableAttachment : NSTextAttachment <WFVariableDelegate, NSCopying>

@property (retain, nonatomic) WFVariableAttachmentCell *wf_attachmentCell;
@property (readonly, nonatomic) WFVariable *variable;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UIFont *surroundingTextFont;
@property (copy, nonatomic) NSString *overrideVariableName;
@property (copy, nonatomic) WFSlotIdentifier *containingSlotIdentifier;

- (id)initWithVariable:(id)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)attachmentCell;
- (void)variableDidChange:(id)a0;

@end

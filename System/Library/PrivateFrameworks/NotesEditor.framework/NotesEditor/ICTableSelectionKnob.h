@class NSString, UIPointerInteraction, ICTableAttachmentViewController;

@interface ICTableSelectionKnob : UIView <UIPointerInteractionDelegate>

@property (nonatomic, getter=isHovering) BOOL hovering;
@property (retain, nonatomic) UIPointerInteraction *pointerInteraction;
@property (weak, nonatomic) ICTableAttachmentViewController *tableAttachmentViewController;
@property (readonly, nonatomic) BOOL isStart;
@property (readonly, nonatomic) BOOL isEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (void)dealloc;
- (id)accessibilityCustomActions;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (id)accessibilityContainer;
- (BOOL)_accessibilityHasTextOperations;
- (void)_accessibilityTextOperationAction:(id)a0;
- (id)_accessibilityTextOperations;
- (void)accessibilityDarkerSystemColorsStatusDidChange:(id)a0;
- (void)getBoldForSelection:(inout BOOL *)a0 italic:(inout BOOL *)a1 underline:(inout BOOL *)a2 strikethrough:(inout BOOL *)a3 rightToLeft:(inout BOOL *)a4;
- (id)aggregatedAttributedTextForCellRangeSelection;
- (id)axCopyString;
- (id)axCutString;
- (id)axLeftToRightString;
- (id)axMakeBoldString;
- (id)axMakeItalicString;
- (id)axMakeNotBoldString;
- (id)axMakeNotItalicString;
- (id)axMakeNotStrikethroughString;
- (id)axMakeNotUnderlinedString;
- (id)axMakeStrikethroughString;
- (id)axMakeUnderlinedString;
- (id)axPasteString;
- (id)axRightToLeftString;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })circleRect;
- (id)initWithTableAttachmentViewController:(id)a0;
- (BOOL)speakCurrentSelectionAXAction;

@end

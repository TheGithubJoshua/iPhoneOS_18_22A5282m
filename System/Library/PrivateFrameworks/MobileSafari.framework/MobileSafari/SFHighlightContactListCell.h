@class UIView, CNContact;
@protocol SFHighlightContactListCellDelegate;

@interface SFHighlightContactListCell : UIControl {
    UIView *_separator;
}

@property (readonly, copy, nonatomic) CNContact *contact;
@property (weak, nonatomic) id<SFHighlightContactListCellDelegate> delegate;
@property (nonatomic, getter=isFirstInList) BOOL firstInList;
@property (nonatomic, getter=isLastInList) BOOL lastInList;
@property (copy, nonatomic) id /* block */ infoViewControllerHandler;

- (id)initWithContact:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)_updateMaskedCorners;
- (void)_didReceiveTap:(id)a0;

@end
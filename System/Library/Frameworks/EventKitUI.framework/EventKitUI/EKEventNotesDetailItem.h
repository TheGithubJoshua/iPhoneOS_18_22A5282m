@interface EKEventNotesDetailItem : EKEventTextDetailItem

+ (id)moreButtonLabel;
+ (id /* block */)textFromEventBlock;
+ (id)titleForCell;
+ (id)titleForExtendedViewController;

- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (id)textForCopyAction;
- (id)textForExtendedViewController;

@end

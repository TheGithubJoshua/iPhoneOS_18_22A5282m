@protocol HKSimpleDataEntryItemDelegate, HKSimpleDataEntryItemToolbarDelegate;

@interface HKSimpleDataEntryItem : NSObject

@property (weak, nonatomic) id<HKSimpleDataEntryItemDelegate> delegate;
@property (weak, nonatomic) id<HKSimpleDataEntryItemToolbarDelegate> toolbarDelegate;
@property (nonatomic) unsigned long long placeholderType;

- (void)localeDidChange:(id)a0;
- (void).cxx_destruct;
- (void)beginEditing;
- (id)cell;
- (id)accessoryToolbar;
- (id)formattedKeyAndValue;
- (void)toolbarDoneButtonPressed:(id)a0;
- (void)toolbarNextButtonPressed:(id)a0;
- (void)toolbarPrevButtonPressed:(id)a0;
- (void)updateCellDisplay;

@end

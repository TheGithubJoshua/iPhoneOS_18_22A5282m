@class NSString, UIBarButtonItemAppearance;

@interface UIToolbarAppearance : UIBarAppearance <_UIBarButtonItemAppearanceChangeObserver>

@property (copy, nonatomic) UIBarButtonItemAppearance *buttonAppearance;
@property (copy, nonatomic) UIBarButtonItemAppearance *doneButtonAppearance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)_doneButtonAppearanceData;
- (void)_describeInto:(id)a0;
- (void)_barButtonItemAppearanceChangedItemData:(id)a0 toItemData:(id)a1 fromItemData:(id)a2;
- (void)_barButtonItemDataChanged:(id)a0;
- (BOOL)_checkEqualTo:(id)a0;
- (id)_plainButtonAppearanceData;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_copyFromAppearance:(id)a0;
- (void)_setupDefaults;
- (void)_completeInit;
- (unsigned long long)_hashInto:(unsigned long long)a0;
- (id)_plainButtonAppearance;
- (void)_decodeFromCoder:(id)a0;
- (id)_doneButtonAppearance;

@end

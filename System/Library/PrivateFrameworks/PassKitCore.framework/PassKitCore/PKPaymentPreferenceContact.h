@class NSString, PKPaymentOptionsRecents, NSOrderedSet;

@interface PKPaymentPreferenceContact : PKPaymentPreference

@property (retain, nonatomic) PKPaymentOptionsRecents *paymentOptionsRecents;
@property (copy, nonatomic) NSString *contactKey;
@property (copy, nonatomic) NSOrderedSet *contactKeys;
@property (copy, nonatomic) NSString *addNewTitle;
@property (copy, nonatomic) NSString *addExistingTitle;
@property (copy, nonatomic) NSString *editExistingTitle;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL showPhoneticName;

- (void).cxx_destruct;
- (BOOL)supportsDeletion;
- (void)_mergeContacts:(id)a0;
- (long long)indexOfContact:(id)a0;
- (id)_removeDuplicateContacts:(id)a0;
- (void)_updateSelectedIndex;
- (id)errorsForPreference:(id)a0;
- (id)initWithTitle:(id)a0 preferences:(id)a1 selectedIndex:(unsigned long long)a2 readOnly:(BOOL)a3;
- (void)mergeRecentsAndMeCard;
- (BOOL)preferenceObject:(id)a0 representsContact:(id)a1;
- (void)setErrors:(id)a0 forPreference:(id)a1;

@end

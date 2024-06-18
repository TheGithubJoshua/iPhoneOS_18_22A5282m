@class NSMutableArray;

@interface CNHandleStringsClassificationBuilder : NSObject

@property (retain, nonatomic) NSMutableArray *emailAddresses;
@property (retain, nonatomic) NSMutableArray *phoneNumbers;
@property (retain, nonatomic) NSMutableArray *unknown;

- (id)init;
- (id)build;
- (void)addUnknown:(id)a0;
- (void).cxx_destruct;
- (void)addPhoneNumber:(id)a0;
- (void)addEmailAddress:(id)a0;

@end

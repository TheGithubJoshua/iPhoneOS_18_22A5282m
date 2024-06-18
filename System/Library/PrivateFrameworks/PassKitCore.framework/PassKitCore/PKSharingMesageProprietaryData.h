@class NSArray;

@interface PKSharingMesageProprietaryData : NSObject

@property (retain, nonatomic) NSArray *displayableSharedEntitlements;
@property (nonatomic) long long accessType;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)description;

@end

@class NSArray;

@interface GDPersonNameComponents : NSObject

@property (readonly, nonatomic) NSArray *prefixes;
@property (readonly, nonatomic) NSArray *givenNames;
@property (readonly, nonatomic) NSArray *middleNames;
@property (readonly, nonatomic) NSArray *familyNames;
@property (readonly, nonatomic) NSArray *suffixes;
@property (readonly, nonatomic) NSArray *nicknames;

- (void).cxx_destruct;
- (id)description;
- (id)initWithNameComponentsBuilder:(id)a0;

@end

@class NSString;

@interface BMNameComponents : NSObject <BMProtoBufWrapper>

@property (readonly, nonatomic) NSString *namePrefix;
@property (readonly, nonatomic) NSString *givenName;
@property (readonly, nonatomic) NSString *middleName;
@property (readonly, nonatomic) NSString *previousFamilyName;
@property (readonly, nonatomic) NSString *familyName;
@property (readonly, nonatomic) NSString *nameSuffix;
@property (readonly, nonatomic) NSString *nickname;

- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithNamePrefix:(id)a0 givenName:(id)a1 middleName:(id)a2 previousFamilyName:(id)a3 familyName:(id)a4 nameSuffix:(id)a5 nickname:(id)a6;

@end

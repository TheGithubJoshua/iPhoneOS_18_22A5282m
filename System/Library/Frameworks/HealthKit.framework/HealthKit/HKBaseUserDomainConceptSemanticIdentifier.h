@class NSUUID;

@interface HKBaseUserDomainConceptSemanticIdentifier : HKUserDomainConceptSemanticIdentifier

@property (readonly, copy, nonatomic) NSUUID *UUID;

+ (id)semanticIdentifierWithComponents:(id)a0;

- (id)initWithUUID:(id)a0;
- (id)init;
- (id)initWithTypeIdentifier:(id)a0;
- (id)stringValue;
- (void).cxx_destruct;

@end

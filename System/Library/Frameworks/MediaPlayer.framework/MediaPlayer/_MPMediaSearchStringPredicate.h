@class NSString, NSSet;

@interface _MPMediaSearchStringPredicate : MPMediaPredicate <MPPProtobufferCoding>

@property (copy, nonatomic) NSString *searchString;
@property (copy, nonatomic) NSSet *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)predicateWithSearchString:(id)a0 forProperties:(id)a1;

- (id)initWithCoder:(id)a0;
- (id)ML3PredicateForContainer;
- (id)initWithProtobufferDecodableObject:(id)a0 library:(id)a1;
- (id)protobufferEncodableObjectFromLibrary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)ML3PredicateForTrack;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_ML3PredicateForEntityClass:(Class)a0;

@end

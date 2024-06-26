@class NSString, NSMutableDictionary, NSMutableSet;

@interface GCHapticCapabilityGraph : NSObject <NSSecureCoding, GCJSONRepresentable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *nodes;
@property (retain, nonatomic) NSMutableSet *exposedCapabilities;
@property (retain, nonatomic) NSMutableSet *exposedLeafCapabilities;
@property (retain, nonatomic) NSMutableSet *allCapabilities;
@property (retain, nonatomic) NSMutableSet *allLeafCapabilities;

- (id)initWithCoder:(id)a0;
- (id)jsonDictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)actuatorsForNode:(id)a0;
- (id)initWithActuators:(id)a0 nodes:(id)a1;
- (id)initWithJSONDictionaryRepresentation:(id)a0;

@end

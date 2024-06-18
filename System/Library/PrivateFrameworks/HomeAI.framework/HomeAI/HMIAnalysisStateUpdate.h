@class NSSet;

@interface HMIAnalysisStateUpdate : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSSet *torsoAnnotations;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (id)stateUpdateByMergingStateUpdate:(id)a0;
- (id)initWithTorsoAnnotations:(id)a0;
- (id)initWithTorsoAnnotationsArray:(id)a0;

@end

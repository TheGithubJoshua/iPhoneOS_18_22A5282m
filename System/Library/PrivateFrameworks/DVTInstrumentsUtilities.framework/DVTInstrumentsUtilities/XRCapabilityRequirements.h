@class NSMutableDictionary;

@interface XRCapabilityRequirements : NSObject {
    NSMutableDictionary *_capabilities;
    NSMutableDictionary *_unimplementedResponses;
}

+ (BOOL)supportsSecureCoding;
+ (id)requirementsFromContext:(id)a0;
+ (id)requirementsFromPlist:(id)a0 error:(id *)a1;

- (id)init;
- (id)plistRepresentation;
- (void).cxx_destruct;
- (BOOL)checkRequirementsAgainstRegistery:(id)a0 error:(id *)a1;

@end

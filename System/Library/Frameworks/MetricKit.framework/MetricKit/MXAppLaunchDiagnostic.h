@class MXCallStackTree, NSMeasurement;

@interface MXAppLaunchDiagnostic : MXDiagnostic

@property (readonly) MXCallStackTree *callStackTree;
@property (readonly) NSMeasurement *launchDuration;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithMetaData:(id)a0 applicationVersion:(id)a1 callStack:(id)a2 launchDuration:(id)a3;

@end

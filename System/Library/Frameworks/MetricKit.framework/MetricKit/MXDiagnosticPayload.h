@class NSArray, NSDate;

@interface MXDiagnosticPayload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSArray *cpuExceptionDiagnostics;
@property (readonly) NSArray *diskWriteExceptionDiagnostics;
@property (readonly) NSArray *hangDiagnostics;
@property (readonly) NSArray *appLaunchDiagnostics;
@property (readonly) NSArray *crashDiagnostics;
@property (readonly) NSDate *timeStampBegin;
@property (readonly) NSDate *timeStampEnd;

- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)JSONRepresentation;
- (id)initWithTimeStampBegin:(id)a0 withTimeStampEnd:(id)a1 withDiagnostics:(id)a2;

@end

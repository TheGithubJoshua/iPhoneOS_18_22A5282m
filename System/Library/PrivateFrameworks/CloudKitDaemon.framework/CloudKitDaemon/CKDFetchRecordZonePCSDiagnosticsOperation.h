@class NSString, NSDictionary, NSArray, CKPCSDiagnosticInformation;

@interface CKDFetchRecordZonePCSDiagnosticsOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSString *identityStatus;
@property (retain, nonatomic) NSDictionary *invalidPCSByZoneID;
@property (retain, nonatomic) NSDictionary *validPCSByZoneID;
@property (retain, nonatomic) NSArray *recordZoneIDs;
@property (retain, nonatomic) CKPCSDiagnosticInformation *pcsDiagnosticInfo;

- (void)main;
- (int)operationType;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (id)relevantZoneIDs;
- (void).cxx_destruct;
- (void)_handleRecordZoneFetch:(id)a0 zoneID:(id)a1 responseCode:(id)a2;

@end

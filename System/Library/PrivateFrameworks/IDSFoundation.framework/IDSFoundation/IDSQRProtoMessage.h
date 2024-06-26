@class IDSQRProtoH3Message;

@interface IDSQRProtoMessage : NSObject {
    IDSQRProtoH3Message *_message;
}

@property (nonatomic) unsigned long long transactionID;
@property (nonatomic) double startTime;
@property (readonly, nonatomic) int messageType;

+ (id)dataWithEmptyUnAllocBindResponse;

- (id)data;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)errorIndication;
- (BOOL)_setupAllocbindRequest:(id)a0 candidatePair:(id)a1 options:(id)a2;
- (BOOL)_setupInfoRequest:(id)a0 candidatePair:(id)a1 options:(id)a2;
- (BOOL)_setupParticipantUpdateRequest:(id)a0 candidatePair:(id)a1 options:(id)a2;
- (BOOL)_setupPluginControlRequest:(id)a0 candidatePair:(id)a1 options:(id)a2;
- (BOOL)_setupPutmaterialRequest:(id)a0 candidatePair:(id)a1 options:(id)a2;
- (BOOL)_setupSessionInfoRequest:(id)a0 candidatePair:(id)a1 options:(id)a2;
- (BOOL)_setupStatsRequest:(id)a0 candidatePair:(id)a1 options:(id)a2;
- (BOOL)_setupTestRequest:(id)a0 candidatePair:(id)a1 options:(id)a2;
- (BOOL)_setupUnallocbindRequest:(id)a0 candidatePair:(id)a1 options:(id)a2;
- (id)allocbindResponse;
- (id)diagnosticIndication;
- (id)getMaterialResponse;
- (id)goAwayIndication;
- (id)infoResponse;
- (id)initWithType:(int)a0 candidatePair:(id)a1 options:(id)a2;
- (id)participantUpdateIndication;
- (id)participantUpdateResponse;
- (id)pluginControlIndication;
- (id)pluginControlResponse;
- (id)putMaterialIndication;
- (id)putMaterialResponse;
- (id)reallocateIndication;
- (id)sessionInfoIndication;
- (id)sessionInfoResponse;
- (id)statsResponse;
- (id)testResponse;
- (id)unallocbindResponse;

@end

@class NSString, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CSVoiceTriggerStatistics : NSObject <CSVoiceTriggerDelegate> {
    unsigned long long _triggerCount;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _consecutivePHSRejects;
    double _lastPHSReject;
    unsigned long long _consecutiveVTRejects;
    unsigned long long _firstPassTriggerCount;
    unsigned long long _consecutiveFalseFirstPassTriggersPerHour;
    NSObject<OS_dispatch_source> *_hourPowerTimer;
    NSMutableArray *_vtEstimationStatistics;
    NSMutableDictionary *_vtDailyMetadata;
    BOOL _vtEstimationStatisticsAreStale;
    BOOL _vtDailyMetadataIsStale;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)voiceTriggerDidDetectNearMiss:(id)a0 deviceId:(id)a1;
- (id)init;
- (void)clearFirstPassTriggerCount;
- (void)incrementVTRejectCount;
- (void)voiceTriggerDidDetectKeyword:(id)a0 deviceId:(id)a1;
- (unsigned long long)getPHSRejectCount;
- (void)voiceTriggerDidDetectSpeakerReject:(id)a0;
- (id)getVoiceTriggerStatistics;
- (void)increaseFalseFirstPassTriggersPerHour;
- (void)resetPHSRejectCount;
- (void)resetVTEstimationStatistics;
- (void)voiceTriggerDidRejected:(id)a0 deviceId:(id)a1;
- (unsigned long long)triggerCount;
- (double)getLastPHSRejectTime;
- (void).cxx_destruct;
- (unsigned long long)getVTRejectCount;
- (void)clearFalseFirstPassTriggersPerHour;
- (void)increaseTriggerCount;
- (void)incrementPHSRejectCount;
- (unsigned long long)firstPassTriggerCount;
- (void)updateVTEstimationStatistics:(id)a0;
- (int)_convertToFirstPassSource:(id)a0;
- (void)clearTriggerCount;
- (id)getVoiceTriggerDailyMetadata;
- (void)incrementFirstPassTriggerCount;

@end

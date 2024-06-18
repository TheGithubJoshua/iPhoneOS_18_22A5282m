@class SDRDiagnosticReporter, NSObject;
@protocol OS_dispatch_queue;

@interface IMMetricsCollector : NSObject {
    SDRDiagnosticReporter *_diagnosticReporter;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue;

+ (id)sharedInstance;

- (void)forceAutoBugCaptureWithSubType:(id)a0 errorPayload:(id)a1;
- (void)_trackEvent:(id)a0;
- (id)init;
- (void)_trackEvent:(id)a0 withStatistic:(id)a1;
- (void *)_ADClientPushValueForDistributionKeyApiInit;
- (id)_stringForSpamType:(unsigned long long)a0;
- (BOOL)trackEvent:(id)a0 withCount:(id)a1;
- (void)trackSpamEvent:(unsigned long long)a0;
- (BOOL)trackEvent:(id)a0 withDictionary:(id)a1;
- (void)autoBugCaptureWithSubType:(id)a0 errorPayload:(id)a1;
- (void)trackSpamEvent:(unsigned long long)a0 withDictionary:(id)a1;
- (void)trackiMessageJunkEvent:(unsigned long long)a0;
- (BOOL)trackAction:(id)a0 extensionBundleID:(id)a1 isNotification:(BOOL)a2;
- (BOOL)trackEvent:(id)a0;
- (void)_trackEvent:(id)a0 withDictionary:(id)a1;
- (id)_stringForiMessageJunkType:(unsigned long long)a0;
- (void)metricAttachmentValidation:(BOOL)a0 attachmentSize:(id)a1 operationalErrorDomain:(id)a2 operationalErrorCode:(id)a3 validationErrorDomain:(id)a4 validationErrorCode:(id)a5;
- (void)dealloc;
- (void *)_ADClientAddValueForScalarKeyApiInit;
- (BOOL)trackEvent:(id)a0 withStatistic:(id)a1;
- (void *)_ADClientSetValueForScalarKeyApiInit;
- (void)_trackEvent:(id)a0 withCount:(id)a1;
- (void)trackiMessageJunkEvent:(unsigned long long)a0 withDictionary:(id)a1;

@end

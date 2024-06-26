@class NSObject;
@protocol OS_dispatch_queue, CSVoiceTriggerAssetChangeDelegate;

@interface CSVoiceTriggerAssetChangeMonitor : NSObject {
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) id<CSVoiceTriggerAssetChangeDelegate> delegate;

+ (id)sharedMonitor;

- (id)init;
- (void)startMonitoring;
- (void).cxx_destruct;
- (void)notifyVoiceTriggerAssetChanged;

@end

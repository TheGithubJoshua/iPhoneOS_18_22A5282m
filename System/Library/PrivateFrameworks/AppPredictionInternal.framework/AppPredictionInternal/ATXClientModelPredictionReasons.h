@class NSBundle;

@interface ATXClientModelPredictionReasons : NSObject {
    NSBundle *_bundle;
}

+ (id)clientModelPredictionReasonsBundlePath;

- (id)localizedStringForKey:(id)a0;
- (id)init;
- (id)appLocationBasedAppClipReason;
- (id)appBehavioralReason;
- (id)appAnchorReasonForAnchorType:(id)a0;
- (id)actionBehavioralReason;
- (id)actionHeuristicReasonForHeuristicName:(id)a0;
- (id)appInstalledAppClipReason;
- (id)appHeroAppReason;
- (void).cxx_destruct;
- (id)appMagicalMomentReasonForAnchorType:(long long)a0;
- (id)actionAnchorReasonForAnchorType:(id)a0;

@end

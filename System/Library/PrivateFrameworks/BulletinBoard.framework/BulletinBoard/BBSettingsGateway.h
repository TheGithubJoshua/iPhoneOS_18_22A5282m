@class NSString, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface BBSettingsGateway : NSObject <BBSettingsGatewayClientInterface> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serverInterface;
+ (void)initialize;
+ (id)clientInterface;

- (void)getEffectiveGlobalContentPreviewsSettingWithCompletion:(id /* block */)a0;
- (void)getSectionInfoWithCompletion:(id /* block */)a0;
- (void)getEffectiveGlobalAnnounceHeadphonesSettingWithCompletion:(id /* block */)a0;
- (void)getEffectiveGlobalAnnounceCarPlaySettingWithCompletion:(id /* block */)a0;
- (id)init;
- (void)setSectionInfo:(id)a0 forSectionID:(id)a1 withCompletion:(id /* block */)a2;
- (void)getSectionInfoForSectionIDs:(id)a0 withCompletion:(id /* block */)a1;
- (void)getEffectiveGlobalSpokenNotificationSettingWithCompletion:(id /* block */)a0;
- (long long)effectiveGlobalAnnounceCarPlaySetting;
- (void)setEffectiveGlobalScheduledDeliveryTimes:(id)a0;
- (id)effectiveSectionInfoForSectionID:(id)a0;
- (id)sectionInfoForSectionID:(id)a0;
- (void)getEffectiveGlobalScheduledDeliverySettingWithCompletion:(id /* block */)a0;
- (void)setEffectiveGlobalContentPreviewsSetting:(long long)a0;
- (long long)effectiveGlobalAnnounceSetting;
- (void)getSectionInfoForSectionID:(id)a0 withCompletion:(id /* block */)a1;
- (void)setSectionInfo:(id)a0 forSectionID:(id)a1;
- (void)getEffectiveSectionInfoForSectionID:(id)a0 withCompletion:(id /* block */)a1;
- (id)allSectionInfo;
- (id)activeSectionInfo;
- (id)allSectionIDs;
- (long long)effectiveGlobalScheduledDeliveryShowNextSummarySetting;
- (void)setEffectiveGlobalAnnounceHeadphonesSetting:(long long)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)setEffectiveGlobalAnnounceCarPlaySetting:(long long)a0;
- (void)setEffectiveGlobalSpokenNotificationSetting:(long long)a0;
- (long long)effectiveGlobalSpokenNotificationSetting;
- (id)effectiveSectionInfoForSectionIDs:(id)a0;
- (void)setEffectiveGlobalScheduledDeliveryShowNextSummarySetting:(long long)a0;
- (id)sectionInfoForSectionIDs:(id)a0;
- (void)getEffectiveGlobalNotificationListDisplayStyleSettingWithCompletion:(id /* block */)a0;
- (void)getSectionInfoForActiveSectionsWithCompletion:(id /* block */)a0;
- (long long)effectiveGlobalScheduledDeliverySetting;
- (void)getEffectiveGlobalAnnounceSettingWithCompletion:(id /* block */)a0;
- (void)setEffectiveGlobalScheduledDeliverySetting:(long long)a0;
- (id)initWithQueue:(id)a0;
- (void)setEffectiveGlobalNotificationListDisplayStyleSetting:(long long)a0;
- (id)effectiveGlobalScheduledDeliveryTimes;
- (long long)effectiveGlobalAnnounceHeadphonesSetting;
- (long long)effectiveGlobalNotificationListDisplayStyleSetting;
- (void)getEffectiveSectionInfoForSectionIDs:(id)a0 withCompletion:(id /* block */)a1;
- (void)dealloc;
- (void)updateSectionInfoForSectionID:(id)a0 withHandler:(id /* block */)a1;
- (id)allEffectiveSectionInfo;
- (void)getEffectiveGlobalScheduledDeliveryTimesWithCompletion:(id /* block */)a0;
- (void)getEffectiveGlobalScheduledDeliveryShowNextSummarySettingWithCompletion:(id /* block */)a0;
- (void)setEffectiveGlobalAnnounceSetting:(long long)a0;
- (long long)effectiveGlobalContentPreviewsSetting;

@end

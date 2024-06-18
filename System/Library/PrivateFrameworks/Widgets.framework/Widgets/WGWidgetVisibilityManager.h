@class NSMutableDictionary, NSMutableSet;
@protocol WGWidgetVisibilityDelegate;

@interface WGWidgetVisibilityManager : NSObject {
    NSMutableDictionary *_widgetTagsByIdentifier;
    NSMutableDictionary *_extensionHashByIdentifier;
    NSMutableDictionary *_visibilityDefaultValueByIdentifier;
    NSMutableDictionary *_visibilityPreferenceByIdentifier;
    NSMutableSet *_visibilityOverridenIdentifiers;
    NSMutableSet *_mobileGestaltQuestions;
    struct MGNotificationTokenStruct { } *_mobileGestaltNotificationToken;
    BOOL _delegateRespondsToWidgetVisibilityDidChange;
}

@property (retain, nonatomic, getter=_mobileGestaltAnswerByWidgetTag) NSMutableDictionary *mobileGestaltAnswerByWidgetTag;
@property (weak, nonatomic) id<WGWidgetVisibilityDelegate> delegate;

- (id)_allWidgetTags;
- (id)init;
- (void)_updateWidgetTagsAndIconVisibilityForExtension:(id)a0;
- (void)_registerForVisiblityPreferenceChanges;
- (void)_widgetVisibilityChanged;
- (void)updateVisibilityForExtensions:(id)a0;
- (void)_widgetVisibilityPreferencesChanged;
- (void).cxx_destruct;
- (BOOL)_updateWidgetVisibilityPreferences;
- (void)_updateWidgetTagsAndVisibilityForExtensions:(id)a0;
- (id)_widgetTagsForWidgetExtensionInfoDictionary:(id)a0;
- (void)dealloc;
- (BOOL)isWidgetWithIdentifierVisible:(id)a0;
- (BOOL)_updateWidgetVisibilityPreference:(id)a0;
- (void)_updateMobileGestaltQuestions;
- (void)_unregisterForVisiblityPreferenceChanges;

@end

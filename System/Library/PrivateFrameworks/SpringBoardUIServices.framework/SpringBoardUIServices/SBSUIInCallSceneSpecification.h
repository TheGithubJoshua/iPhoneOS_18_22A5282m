@interface SBSUIInCallSceneSpecification : UIApplicationSceneSpecification

- (Class)clientSettingsClass;
- (id)initialActionHandlers;
- (id)initialSettingsDiffActions;
- (Class)settingsClass;
- (Class)uiSceneMinimumClass;
- (id)uiSceneSessionRole;

@end

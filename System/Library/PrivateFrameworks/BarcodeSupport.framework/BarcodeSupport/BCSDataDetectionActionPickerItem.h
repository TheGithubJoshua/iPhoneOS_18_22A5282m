@class NSString, DDAction, CNContact;

@interface BCSDataDetectionActionPickerItem : BCSActionPickerItem <DDDetectionControllerInteractionDelegate> {
    DDAction *_ddAction;
}

@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) NSString *icsString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)icon;
- (id)actionURL;
- (void).cxx_destruct;
- (id)label;
- (void)action:(id)a0 didDismissAlertController:(id)a1;
- (id)targetApplicationBundleIdentifier;
- (BOOL)isCopyActionItem;
- (id)initWithAction:(id)a0 ddAction:(id)a1;
- (void)performActionWithFBOptions:(id)a0;
- (BOOL)shouldDismissAlertWhenActionIsTaken;

@end

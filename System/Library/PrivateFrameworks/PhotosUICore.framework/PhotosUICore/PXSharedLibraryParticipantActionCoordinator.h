@class UIViewController, PXSharedLibraryStatusProvider;
@protocol PXSharedLibraryParticipant;

@interface PXSharedLibraryParticipantActionCoordinator : NSObject {
    PXSharedLibraryStatusProvider *_statusProvider;
    UIViewController *_actionViewController;
}

@property (readonly, nonatomic) id<PXSharedLibraryParticipant> participant;
@property (readonly, nonatomic) UIViewController *actionViewController;

- (void).cxx_destruct;
- (id)initWithParticipant:(id)a0;
- (void)_removeParticipant:(id)a0;
- (void)_resendInvitation:(id)a0;

@end

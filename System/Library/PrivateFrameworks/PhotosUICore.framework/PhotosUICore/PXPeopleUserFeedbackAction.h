@class NSDictionary, PHUserFeedback;
@protocol PXFastEnumeration;

@interface PXPeopleUserFeedbackAction : PXPhotosAction {
    id<PXFastEnumeration> _collections;
}

@property (readonly, nonatomic) PHUserFeedback *userFeedback;
@property (copy, nonatomic) NSDictionary *undoUserFeedbacks;

- (id)actionIdentifier;
- (id)collections;
- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)actionNameLocalizationKey;
- (id)initWithPeople:(id)a0 feedbackType:(unsigned long long)a1;
- (void)performRedo:(id /* block */)a0;
- (void)performUndo:(id /* block */)a0;

@end
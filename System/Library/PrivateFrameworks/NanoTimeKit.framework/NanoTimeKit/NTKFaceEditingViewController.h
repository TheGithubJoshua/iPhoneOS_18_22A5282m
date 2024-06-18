@class NTKFace, NTKFaceEditView;

@interface NTKFaceEditingViewController : UIViewController {
    NTKFaceEditView *_editView;
}

@property (readonly, nonatomic) NTKFace *face;
@property (readonly, nonatomic) long long currentEditMode;

- (void)loadView;
- (void)activate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFace:(id)a0;
- (void)deactivateWithCompletion:(id /* block */)a0;
- (void)faceColorEditOptionsChanged;
- (void)willActivate;
- (void)willDeactivate;

@end

@interface AMSCoreOptionsBox : NSObject

@property (nonatomic) struct Options { void /* function */ **_vptr$Options; struct shared_ptr<AMSCore::Options::OptionsImp> { struct OptionsImp *__ptr_; struct __shared_weak_count *__cntrl_; } mOptionsImpSharedPtr; } options;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithProcessInfo:(id)a0;

@end

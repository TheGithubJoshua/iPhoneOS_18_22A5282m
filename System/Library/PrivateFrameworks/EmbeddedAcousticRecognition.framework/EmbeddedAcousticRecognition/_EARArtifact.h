@interface _EARArtifact : NSObject {
    struct shared_ptr<quasar::artifact::Artifact> { struct Artifact *__ptr_; struct __shared_weak_count *__cntrl_; } _artifact;
}

+ (BOOL)isValid:(id)a0;
+ (void)initialize;

- (id)getVersion;
- (void)minimize;
- (BOOL)write:(id)a0;
- (BOOL)isEquivalentTo:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getInfo:(id)a0;
- (id)getContent:(id)a0;
- (id)getLocale;
- (BOOL)hasContent:(id)a0;
- (BOOL)hasInfo:(id)a0;
- (id)initWithAcceptedContent:(id)a0 acceptedInfo:(id)a1 dependent:(id)a2;
- (BOOL)isMinimalistic;
- (BOOL)supportsContent:(id)a0;
- (BOOL)supportsInfo:(id)a0;

@end

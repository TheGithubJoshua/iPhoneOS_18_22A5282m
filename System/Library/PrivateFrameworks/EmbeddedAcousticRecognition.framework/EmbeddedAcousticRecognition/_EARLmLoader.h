@interface _EARLmLoader : NSObject {
    struct shared_ptr<quasar::LmLoader2> { struct LmLoader2 *__ptr_; struct __shared_weak_count *__cntrl_; } _loader;
}

+ (void)initialize;

- (id)init;
- (id).cxx_construct;
- (void)invalidate;
- (void).cxx_destruct;
- (id)fetchOrLoadModelWithDirectory:(id)a0 recognizer:(id)a1;
- (id)loadForRecognitionWithDirectory:(id)a0 recognizer:(id)a1 task:(id)a2 applicationName:(id)a3;

@end

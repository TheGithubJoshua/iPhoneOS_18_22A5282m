@interface RBImageQueueLayer : CALayer {
    struct cf_ptr<_CAImageQueue *> { struct _CAImageQueue *_p; } _queue;
}

+ (id)defaultValueForKey:(id)a0;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;

@end

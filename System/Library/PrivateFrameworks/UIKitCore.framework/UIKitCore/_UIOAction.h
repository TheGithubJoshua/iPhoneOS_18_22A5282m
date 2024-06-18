@class _UIOActionOriginContext;

@interface _UIOAction : BSAction {
    _UIOActionOriginContext *_originContext;
}

@property (readonly, nonatomic) _UIOActionOriginContext *originContext;

- (void).cxx_destruct;
- (BOOL)isPermitted;
- (id)initWithOriginContext:(id)a0 info:(id)a1 responder:(id)a2;
- (void)performActionFromConnection:(id)a0;

@end

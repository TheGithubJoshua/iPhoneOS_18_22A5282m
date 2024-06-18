@interface WebInspectorFrontend : NSObject {
    struct NakedPtr<WebInspectorFrontendClient> { struct WebInspectorFrontendClient *m_ptr; } m_frontendClient;
}

- (void)attach;
- (void)detach;
- (void)showConsole;
- (id).cxx_construct;
- (void)close;
- (void)setDebuggingEnabled:(BOOL)a0;
- (BOOL)isDebuggingEnabled;
- (id)initWithFrontendClient:(struct NakedPtr<WebInspectorFrontendClient> { struct WebInspectorFrontendClient *x0; })a0;
- (BOOL)isProfilingJavaScript;
- (BOOL)isTimelineProfilingEnabled;
- (void)setTimelineProfilingEnabled:(BOOL)a0;
- (void)startProfilingJavaScript;
- (void)stopProfilingJavaScript;

@end

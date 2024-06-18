@interface BRProcessMonitor : NSObject {
    id _monitor;
}

- (id)_bundleIDForPID:(int)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_isProcessForeground:(id)a0 bundleID:(id)a1;
- (id)initForProcessID:(int)a0 observer:(id)a1;

@end

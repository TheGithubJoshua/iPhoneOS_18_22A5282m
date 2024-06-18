@class MFActivityMonitor;

@interface _MFBlockIterationHandler : NSObject <MFSearchResultHandler, QueryProgressMonitor> {
    id /* block */ _block;
    BOOL _cancelled;
    MFActivityMonitor *_monitor;
}

- (BOOL)handleMessage:(id)a0;
- (BOOL)shouldCancel;
- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;

@end

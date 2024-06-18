@class ATXHeuristicDevice;

@interface ATXCallHistoryDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (id)initWithDevice:(id)a0;
- (void)callNewerThan:(double)a0 showIncoming:(BOOL)a1 showOutgoing:(BOOL)a2 missedOnly:(BOOL)a3 callback:(id /* block */)a4;
- (void).cxx_destruct;
- (id)_dictForCall:(id)a0;
- (id)_dictForHandle:(id)a0;

@end

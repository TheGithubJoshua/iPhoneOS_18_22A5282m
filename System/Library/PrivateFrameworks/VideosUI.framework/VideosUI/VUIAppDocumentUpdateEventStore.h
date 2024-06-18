@class NSArray, NSMutableDictionary;

@interface VUIAppDocumentUpdateEventStore : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventByEventDescriptor;
@property (readonly, copy, nonatomic) NSArray *events;

- (id)init;
- (void)removeAllEvents;
- (void).cxx_destruct;
- (id)description;
- (void)addEvents:(id)a0;
- (void)removeEvent:(id)a0;
- (void)addEvent:(id)a0;

@end

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BRCClientState : NSObject {
    NSMutableDictionary *_dict;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)objectForKey:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)objectForKeyedSubscript:(id)a0;
- (id)dictionary;

@end

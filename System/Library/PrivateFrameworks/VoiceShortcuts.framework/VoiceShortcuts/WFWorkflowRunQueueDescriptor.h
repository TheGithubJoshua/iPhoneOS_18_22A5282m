@protocol WFPropertyListObject;

@interface WFWorkflowRunQueueDescriptor : NSObject <NSCopying> {
    unsigned long long _type;
    id<WFPropertyListObject> _queueIdentifier;
}

- (unsigned long long)hash;
- (id)initWithType:(unsigned long long)a0 identifier:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

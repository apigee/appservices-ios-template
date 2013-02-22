//
//  Client.h
//  Apigee App Services iOS Template
//
//  Created by Tim Anglade on 2/22/13.
//  Copyright (c) 2013 Apigee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UGClient.h"


@interface Client : NSObject

@property (nonatomic, strong) UGClient *usergridClient;
@property (nonatomic, strong) UGUser *user;

-(NSString*)postBook;



@end

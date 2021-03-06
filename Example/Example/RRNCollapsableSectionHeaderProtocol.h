//
//  RRNCollapsableSectionHeaderProtocol.h
//  RRNCollapsableSectionTableView
//
//  Created by Robert Nash on 08/09/2015.
//  Copyright (c) 2015 Robert Nash. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol RRNCollapsableSectionHeaderReactiveProtocol;

@protocol RRNCollapsableSectionHeaderProtocol <NSObject>
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) id <RRNCollapsableSectionHeaderReactiveProtocol> interactionDelegate;
-(void)openAnimated:(BOOL)animated;
-(void)closeAnimated:(BOOL)animated;
@end

@protocol RRNCollapsableSectionHeaderReactiveProtocol <NSObject>
-(void)userTapped:(UIView <RRNCollapsableSectionHeaderProtocol> *)view;
@end
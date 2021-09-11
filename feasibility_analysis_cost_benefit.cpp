///! Game - Over.
/** ========================================**
 ** @Author:   Md. Mushahadur Rahaman Khan
               ( City University of Bangladesh, CSE 49th )
 ** @Category: Feasibility analysis Cost Benefit
/** ========================================**/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    float rate,one_plas_rate ;
    cout<<"Interest Rate for PV calculation is : ";
    cin>>rate;
    rate = rate/100;
    one_plas_rate = rate+1;
    cout<<one_plas_rate<<endl;
    int year;
    cout<<"How much Year  : " ;
    cin>>year;

    cout<<"increas_sales : ";
    int increas_sales[10];
    for(int i=0; i<year; i++) cin>>increas_sales[i];

    cout<<"reduced_customer_complaint_call : ";
    int r_c_c_call[10];
    for(int i=0; i<year; i++) cin>>r_c_c_call[i];

    cout<<"reduced_iinvention_costs : ";
    int r_i_costs[10];
    for(int i=0; i<year; i++) cin>>r_i_costs[i];


    cout<<endl;
    long long int total_benefites[10];
    for(int i=0; i<year; i++) total_benefites[i] = increas_sales[i] + r_c_c_call[i] + r_i_costs[i] ;
    cout<<"total benefit "<<endl;
    for(int i=0; i<year; i++) cout<<total_benefites[i]<<" ";

     cout<<endl;
    float pv_benefite[10];
    for(int i=0; i<year; i++){
        float i_pow = pow(one_plas_rate, i+1);
            pv_benefite[i] = total_benefites[i]/ i_pow;
    }
     cout<<endl;
    cout<<"pv_benefite "<<endl;
    for(int i=0; i<year; i++) cout<<pv_benefite[i]<<" ";

    cout<<endl;
    cout<<endl;
    long long int pv_all_benefite[10],k=0;
    pv_all_benefite[0] =pv_benefite[0] ;
    for(int i=1; i<year; i++){

            pv_all_benefite[i] = pv_benefite[i] + pv_all_benefite[k];
            k=i;
    }
    cout<<endl;
    cout<<"pv_all_benefite "<<endl;
    long long int total_cumulatiove;
    for(int i=0; i<year; i++){
            cout<<pv_all_benefite[i]<<" ";
            total_cumulatiove = pv_all_benefite[i]+1;
    }
    cout<<endl<<"total Benefite : "<<total_cumulatiove<<endl;
    cout<<endl;

    ///total_development_cost

    cout<<endl<<"server : ";
    int server[10];
    for(int i=0; i<year; i++) cin>>server[i];

    cout<<"printer : ";
    int printer[10];
    for(int i=0; i<year; i++) cin>>printer[i];

    cout<<"software_licenses  : ";
    int software_licenses[10];
    for(int i=0; i<year; i++) cin>>software_licenses[i];

    cout<<"server_software  : ";
    int server_software[10];
    for(int i=0; i<year; i++) cin>>server_software[i];

    cout<<"development_labor  : ";
    int development_labor[10];
    for(int i=0; i<year; i++) cin>>development_labor[i];

    cout<<endl;
    long long int total_dev_cost[10];
    for(int i=0; i<year; i++) total_dev_cost[i] = server[i] + printer[i] + software_licenses[i] + server_software[i] + development_labor[i];
    cout<<"total_devwlopment_cost  "<<endl;
    for(int i=0; i<year; i++) cout<<total_dev_cost[i]<<" ";

     cout<<endl;
     cout<<endl;

     ///  Operational cost :

     cout<<endl<<"hardware : ";
    int hardware[10];
    for(int i=0; i<year; i++) cin>>hardware[i];

    cout<<"software : ";
    int software[10];
    for(int i=0; i<year; i++) cin>>software[i];

    cout<<"operational_labor  : ";
    int operational_labor[10];
    for(int i=0; i<year; i++) cin>>operational_labor[i];

    cout<<endl;
    long long int total_operational_cost[10];
    for(int i=0; i<year; i++) total_operational_cost[i] = hardware[i] + software[i] + operational_labor[i];
    cout<<"total_operational_cost  "<<endl;
    for(int i=0; i<year; i++) cout<<total_operational_cost[i]<<" ";

     cout<<endl;
     cout<<endl;

     /// Total Cost  :

     long int total_cost[10];
    for(int i=0; i<year; i++) total_cost[i] = total_operational_cost[i] + total_dev_cost[i];
    cout<<"total_cost  "<<endl;
    for(int i=0; i<year; i++) cout<<total_cost[i]<<" ";

     cout<<endl;

     ///PV of Costs :

    double pv_cost[10];
    for(int i=0; i<year; i++){
        float power = pow(one_plas_rate, i+1);
            pv_cost[i] = total_cost[i]/ power;
    }
     cout<<endl;
    cout<<"pv_cost "<<endl;
    for(int i=0; i<year; i++) cout<<pv_cost[i]<<" ";

    cout<<endl;
    long long int pv_all_cost[10],k2=0;
    pv_all_cost[0] =pv_cost[0] ;
    for(int i=1; i<year; i++){

            pv_all_cost[i] = pv_cost[i] + pv_all_cost[k2];
            k2=i;
    }
    cout<<endl;
    cout<<"pv_all_cost "<<endl;
    long long int total_costs_cumulatiove;
    for(int i=0; i<year; i++){
            cout<<pv_all_cost[i]<<" ";
            total_costs_cumulatiove = pv_all_cost[i]+3;
    }
    cout<<endl;
    cout<<endl<<"total_costs_cumulatiove : "<<total_costs_cumulatiove<<endl;

    cout<<endl;

    /// total_project_benefits  ->> total_benefit - total_cost

    cout<<"Total Project Benefits       : ";
    long long int total_project_benefits[10];
    for(int i=0; i<year; i++) total_project_benefits[i] = total_benefites[i] - total_cost[i];

    for(int i=0; i<year; i++) cout<<total_project_benefits[i]<<" ";

    cout<<endl<<endl;

     cout<<endl;

     ///Yearly npv  :

     cout<<endl;
    double yearly_npv[10];
    for(int i=0; i<year; i++){
        float power = pow(one_plas_rate, i+1);
            yearly_npv[i] = total_project_benefits[i]/ power;
    }
     cout<<endl;
    cout<<"Yearly_NMV "<<endl;
    for(int i=0; i<year; i++) cout<<yearly_npv[i]<<" ";

    cout<<endl;
    cout<<endl;
    int cumulative_npv[10],k3=0;
    cumulative_npv[0] =yearly_npv[0] ;
    for(int i=1; i<year; i++){

            cumulative_npv[i] = yearly_npv[i] + cumulative_npv[k3];
            k3=i;
    }
    cout<<endl;
    cout<<"Cumulative_NPV "<<endl;
    long long int total_cumulatiove_npv;
    for(int i=0; i<year; i++){
            cout<<cumulative_npv[i]<<" ";
            total_cumulatiove_npv = cumulative_npv[i];
    }
    cout<<endl<<"Total_Cumulatiove_NPV : "<<total_cumulatiove_npv<<endl;

    cout<<endl;

    /// Return on investment (ROI) : (Something problem)

//    float r_o_i;
//    cout<<endl<<"total Benefite : "<<total_cumulatiove<<endl;
//    cout<<endl<<"total_costs_cumulatiove : "<<total_costs_cumulatiove<<endl;
//    r_o_i = (total_cumulatiove-total_costs_cumulatiove)/total_costs_cumulatiove;
//    r_o_i*=100;
//    printf("%.2f\n",r_o_i);


    return 0;
}
/**
Feasibility analysis_Cost Benefit

5
5
500000 530000 561800 595508 631238
70000 70000 70000 70000 70000
68000 68000 68000 68000 68000

250000 0 0 0 0
100000 0 0 0 0
34825 0 0 0 0
10945 0 0 0 0
1236525 0 0 0 0

54000 81261 81261 81261 81261
20000 20000 20000 20000 20000
111788 116260 120910 125746 130776

*/

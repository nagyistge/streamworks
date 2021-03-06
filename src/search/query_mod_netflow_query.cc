/*
 * Generated by ./compile_query.py
 */
#include "schema_netflow.h"
#include "vertex.hpp"
#include "filters.hpp"
using namespace std;

inline bool filter_vertex_0(int deg, const string& label)
{
    if(GT<int>(deg, 19)) {
        return true;
    }
    return false;

}

inline bool filter_vertex_1(int deg, const string& label)
{
    if(GT<int>(deg, 19)) {
        return true;
    }
    return false;

}

inline bool filter_vertex_2(int deg, const string& label)
{
    if(GT<int>(deg, 19)) {
        return true;
    }
    return false;

}

inline bool filter_edge_0(const NetflowAttbs& edge_data)
{
    if(GT<int>(edge_data.num_bytes, 1024)) {
        return true;
    }
    return false;

}

inline bool filter_edge_1(const NetflowAttbs& edge_data)
{
    if(GT<int>(edge_data.num_bytes, 1024)) {
        return true;
    }
    return false;

}

inline bool filter_edge_2(const NetflowAttbs& edge_data)
{
    if(GT<int>(edge_data.num_bytes, 1024)) {
        return true;
    }
    return false;

}

bool Label :: FilterVertex(int u, int deg, const Label& label) const
{
    switch(u) {
        case 0: return filter_vertex_0(deg, label.label);
        case 1: return filter_vertex_1(deg, label.label);
        case 2: return filter_vertex_2(deg, label.label);
        default: return true;
    }
}

bool NetflowAttbs :: FilterEdge(int edge_id) const
{
    switch(edge_id) {
        case 0: return filter_edge_0(*this);
        case 1: return filter_edge_1(*this);
        case 2: return filter_edge_2(*this);
        default: return true;
    }
}

